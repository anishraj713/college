def fcfs(process_list):
    t = 0
    gantt = []
    completed = {}
    process_list.sort()
    while process_list != []:
        if process_list[0][0] > t:
            t += 1
            gantt.append("Idle")
            continue
        else:
            process = process_list.pop(0)
            gantt.append(process[2])
            t += process[1]
            pid = process[2]
            ct = t
            tt = ct - process[0]
            wt = tt - process[1]
            completed[pid] = [ct, tt, wt]
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
    fcfs(process_list)
