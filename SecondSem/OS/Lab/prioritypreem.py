def priority_preemptive(process_list):
    t = 0
    gantt = []
    completed = {}
    burst_times = {p[1]: p[2] for p in process_list}
    remaining_time = {p[1]: p[2] for p in process_list}

    while process_list or any(remaining_time.values()):
        available = [p for p in process_list if p[3] <= t]

        if not available:
            gantt.append("Idle")
            t += 1
            continue

        available.sort()
        current_process = available[0]
        pid = current_process[1]

        if remaining_time[pid] > 0:
            gantt.append(pid)
            remaining_time[pid] -= 1
            t += 1

            if remaining_time[pid] == 0:
                ct = t
                arrival_time = current_process[3]
                burst_time = burst_times[pid]
                tt = ct - arrival_time
                wt = tt - burst_time
                completed[pid] = [ct, tt, wt]

    print("Gantt Chart:", gantt)
    print("Completion times, Turnaround times, and Waiting times:", completed)


if __name__ == "__main__":
    process_list = []
    n = int(input("Enter the number of processes: "))
    for i in range(1, n + 1):
        priority_num = int(input(f"Enter priority for process P{i}: "))
        burst_time = int(input(f"Enter burst time for process P{i}: "))
        arrival_time = int(input(f"Enter arrival time for process P{i}: "))
        process_list.append([priority_num, f"P{i}", burst_time, arrival_time])

    priority_preemptive(process_list)
