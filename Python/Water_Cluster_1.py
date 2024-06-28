class Cluster:
    def __init__(self, name, need, capacity):
        self.name = name
        self.need = need
        self.capacity = capacity
        self.stored = capacity

class Distribution_System:
    def __init__(self, no_of_days, clusters, links):
        self.no_of_days = no_of_days
        self.clusters = clusters
        self.links = links
        self.federal_link = self.find_federal_links()
    
    def find_federal_links(self):
        federal_link = []
        for link in self.links:
            if 'F' in link:
                federal_link.extend(link)
        federal_link = list(set(federal_link))
        federal_link.remove('F')
        return federal_link
    
    def distribution(self):
        used_water = 0
        present_day = 1

        while present_day != self.no_of_days:
            
            present_day += 1

            for cluster in self.clusters:
                cluster.stored -= cluster.need   

                if cluster.stored < cluster.need:
                    cluster.stored = cluster.capacity
                    used_water += cluster.capacity
                    
                    if cluster.name not in self.federal_link:
                        last_cluster = cluster.name
                        
                        while True:
                            for link in self.links:
                                if last_cluster in link:
                                    temp = link[:]
                                    temp.remove(cluster.name)
                                    last_cluster = temp[0]
                                    break
                        
                            for clus in self.clusters:
                                if clus.name == last_cluster:
                                    used_water += clus.capacity
                                    clus.stored = clus.capacity
                            
                                    if last_cluster in self.federal_link:
                                        break
                            
                            if last_cluster in self.federal_link:
                                break
        return used_water

#_______________________________________________________________________________#

no_of_days = int(input())
no_of_clusters = int(input())
total_water_used = 0
clusters = []

for _ in range(no_of_clusters):
    temp = input().split()
    cluster = Cluster(temp[0], int(temp[1]), int(temp[2]))
    total_water_used += cluster.capacity
    clusters.append(cluster)

no_of_links = int(input())

links = []
for _ in range(no_of_links):
    temp = input().split("_")
    links.append(temp)

#________________________________________________________________________________#

water_system = Distribution_System(no_of_days, clusters, links)
total_water_used += water_system.distribution()

#________________________________________________________________________________#

print(total_water_used)
