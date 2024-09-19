def srtf_preemptive(process_list):
    completed_process = {}
    gantt_chart = []
    t = 0

    while process_list:
        available = [p for p in process_list if p[1] <= t]

        if not available:
            gantt_chart.append("Idle")
            t += 1
            continue

        available.sort(key=lambda x: x[0])  # Sort by burst time

        process = available[0]
        process_name = process[2]
        burst_time = process[0]

        gantt_chart.append(process_name)
        t += 1

        # Reduce burst time of the selected process
        burst_time -= 1
        process[0] = burst_time

        # Check if process has completed
        if burst_time == 0:
            ct = t
            tt = ct - process[1]
            wt = tt - process[0]
            completed_process[process_name] = [ct, tt, wt]
            process_list.remove(process)

    print("Completed processes:")
    print(completed_process)
    print("Gantt Chart:")
    print(gantt_chart)


def take_input():
    process_list = []
    n = int(input("Enter the number of processes: "))
    for i in range(1, n + 1):
        burst_time = int(input(f"Enter burst time for process P{i}: "))
        arrival_time = int(input(f"Enter arrival time for process P{i}: "))
        process_name = f"P{i}"
        process_list.append([burst_time, arrival_time, process_name])

    return process_list


if __name__ == "__main__":
    process_list = take_input()
    srtf_preemptive(process_list)
