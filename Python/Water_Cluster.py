class Cluster:
    def __init__(self, name, need, capacity):
        self.name = name
        self.need = need
        self.capacity = capacity
        self.stored = capacity

    
#____________________________________________________#

no_of_days = int(input())
no_of_clusters = int(input())

clusters = []

for i in range(no_of_clusters):
    temp = [i for i in input().split()]
    cluster = Cluster(temp[0], int(temp[1]), int(temp[2]))
    clusters.append(cluster)

no_of_links = int(input())

links = []

for i in range(no_of_links):
    temp = [i for i in input().split("_")]
    links.append(temp)

#___________________________________________________#

federal_link = []
for i in links:
    if 'F' in i:
        federal_link.append(i[0])
        federal_link.append(i[1])

federal_link = list(set(federal_link))
federal_link.remove('F')

#___________________________________________________#
used_water = 0
present_day = 1
for i in clusters:
    used_water += i.capacity

while (present_day != no_of_days):
    flag = 0
    present_day += 1

    for i in clusters:
        i.stored = i.stored - i.need
        
        if i.stored < i.need:
            i.stored = i.capacity
            used_water = used_water + i.capacity

            if i.name not in federal_link:
                flag = 1
                last_cluster = i.name

        while (flag == 1):
            for j in links:
                if last_cluster in j:
                    temp = j
                    temp.remove(i.name)
                    last_cluster = temp[0]
                    break

            for j in clusters:
                if j.name == last_cluster:
                    used_water += j.capacity
                    j.stored = j.capacity
                    break
                
            if last_cluster in federal_link:
                flag = 0
                break

print(used_water)