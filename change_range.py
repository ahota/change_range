#simple one-liner
def change_range_minimal(value, old_min, old_max, new_min, new_max):
    return (new_max-new_min)*float(value-old_min)/(old_max-old_min)+new_min

#in case range is needed
def change_range(value, old_min, old_max, new_min, new_max):
    old_range = old_max - old_min
    new_range = new_max - new_min
    return new_range * float(value - old_min)/old_range + new_min

if __name__ == '__main__':
    old_min = -5
    old_max = 0
    new_min = 0
    new_max = 5
    for v in range(old_min, old_max):
        print change_range(v, old_min, old_max, new_min, new_max)
