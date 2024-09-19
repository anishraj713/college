def sjf(process_list):
    t = 0
    gantt = []
    completed = {}

    while process_list != []:
        available = []
        for p in process_list:
            if p[1] <= t:
                available.append(p)
        # No processes available
        if available == []:
            t += 1
            gantt.append("Idle")
            continue
        else:
            available.sort()
            process = available[0]
            # Service the process
            burst_time = process[0]
            pid = process[2]
            arrival_time = process[1]
            t += burst_time
            gantt.append(pid)
            ct = t
            tt = ct - arrival_time
            wt = tt - burst_time
            process_list.remove(process)
            completed[pid] = [ct, tt, wt]

    print("Gantt Chart:", gantt)
    print("Completion times, Turnaround times, and Waiting times:", completed)


if __name__ == "__main__":
    process_list = []
    n = int(input("Enter the number of processes: "))
    for _ in range(n):
        burst_time = int(input("Enter burst time: "))
        arrival_time = int(input("Enter arrival time: "))
        pid = input("Enter process ID: ")
        process_list.append([burst_time, arrival_time, pid])
    sjf(process_list)
 