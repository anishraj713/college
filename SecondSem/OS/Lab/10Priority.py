def priority(process_list):
    gantt = []
    t = 0
    completed = {}
    while process_list != []:
        available = []
        for p in process_list:
            arrival_time = p[3]
            if arrival_time <= t:
                available.append(p)

        if available == []:
            gantt.append("Idle")
            t += 1
            continue
        else:
            available.sort()
            process = available[0]
            process_list.remove(process)
            pid = process[1]
            gantt.append(pid)
            burst_time = process[2]
            t += burst_time
            ct = t
            arrival_time = process[3]
            tt = ct - arrival_time
            wt = tt - burst_time
            completed[pid] = [ct, tt, wt]

    print("Gantt Chart:", gantt)
    print("Completion times, Turnaround times, and Waiting times:", completed)


if __name__ == "__main__":
    process_list = []
    n = int(input("Enter the number of processes: "))
    for _ in range(n):
        priority_num = int(input(f"Enter priority for process {_ + 1}: "))
        burst_time = int(input(f"Enter burst time for process {_ + 1}: "))
        arrival_time = int(input(f"Enter arrival time for process {_ + 1}: "))
        pid = input(f"Enter process ID for process {_ + 1}: ")
        process_list.append([priority_num, pid, burst_time, arrival_time])

    priority(process_list)
