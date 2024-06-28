import numpy as np
import pandas as pd

lst = [['a',1,'A'],['b',2,'B'],['c',3,'C']]

lst = pd.DataFrame(lst, columns=['name','r.no','grp'])


print(lst.iloc[0, 1])

print(lst)