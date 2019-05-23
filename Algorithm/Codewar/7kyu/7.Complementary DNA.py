# A는 T로 C는 G로 바꿔주는 함수

# 내 풀이
def DNA_strand(dna):
    temp = list(dna)
    for i in range(len(temp)):
        if temp[i] == "A":
            temp[i] = "T"
        elif temp[i] == "T":
            temp[i] = "A"
        elif temp[i] == "C":
            temp[i] = "G"
        elif temp[i] == "G":
            temp[i] = "C"
    return ''.join(temp)

# 사람들 풀이
pairs = {'A':'T', 'T':'A', 'C':'G', 'G':'C'}
def DNA_strand(dna):
    return ''.join([pairs[x] for x in dna])
