nums = input()
nums_list = [i for i in nums]
nums_list.sort(reverse=True)
print(''.join(nums_list))
