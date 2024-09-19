def round_robin(process_list, time_quanta):
    t = 0
    gantt = []
    completed = {}
    process_list.sort()
    burst_times = {}
    for p in process_list:
        pid = p[2]
        burst_time = p[1]
        burst_times[pid] = burst_time
    while process_list != []:
        available = []
        for p in process_list:
            if p[0] <= t:
                available.append(p)
        if available == []:
            gantt.append("Idle")
            t += 1
            continue
        else:
            process = available[0]
            gantt.append(process[2])
            process_list.remove(process)
            rem_burst = process[1]
            if rem_burst <= time_quanta:
                t += rem_burst
                ct = t
                pid = process[2]
                arrival_time = process[0]
                burst_time = burst_times[pid]
                tt = ct - arrival_time
                wt = tt - burst_time
                completed[process[2]] = [ct, tt, wt]
                continue
            else:
                t += time_quanta
                process[1] -= time_quanta
                process_list.append(process)
    print("Gantt Chart:", gantt)
    print("Completion times, Turnaround times, and Waiting times:", completed)


if __name__ == "__main__":
    process_list = []
    n = int(input("Enter the number of processes: "))
    for _ in range(n):
        arrival_time = int(input("Enter arrival time: "))
        burst_time = int(input("Enter burst time: "))
        pid = input("Enter process ID: ")
        process_list.append([arrival_time, burst_time, pid])
    time_quanta = int(input("Enter time quantum: "))
    round_robin(process_list, time_quanta)
 