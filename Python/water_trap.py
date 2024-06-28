blocks = [int(i) for i in input().split()]

block_1 = blocks.copy()
block_2 = blocks.copy()

i = 1

while (i < len(blocks)):
    if (block_1[i] < block_1[i-1]):
        block_1[i] = block_1[i-1]
    i += 1

i = len(blocks) - 2

m = block_1[-1] 

block_1[-1] = block_2[-1]

while (block_2[i] != m):
    if (block_2[i] < block_2[i+1]):
        block_2[i] = block_2[i+1]
    block_1[i] = block_2[i]
    i -= 1

print(blocks)

print(block_1)

print(sum(block_1)-sum(blocks))
