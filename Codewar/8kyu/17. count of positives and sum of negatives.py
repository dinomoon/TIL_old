# 양수는 갯수를 음수는 합을 돌려주는 함수
# 내 풀이
def count_positives_sum_negatives(arr):
    count = 0
    sum = 0
    result = []
    for i in arr:
        if i > 0:
            count += 1
        else:
            sum += i

    if len(arr) == 0:
        return result

    result.append(count)
    result.append(sum)
    return result


# 사람들 풀이
def count_positives_sum_negatives(arr):
    if not arr: return []
    pos = 0
    neg = 0
    for x in arr:
        if x > 0:
            pos += 1
        if x < 0:
            neg += x
    return [pos, neg]


def count_positives_sum_negatives(arr):
    return [len([x for x in arr if x > 0 ])] + [sum(y for y in arr if y < 0)] if arr else []


def count_positives_sum_negatives(arr):
    pos = sum(1 for x in arr if x > 0)
    neg = sum(x for x in arr if x < 0)
    return [pos, neg] if len(arr) else []
