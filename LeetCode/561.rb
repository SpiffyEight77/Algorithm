# @param {Integer[]} nums
# @return {Integer}

nums = [1,3,2,4]

def array_pair_sum(nums)
    
    sum = 0

    nums.sort!

    for i in 0..nums.length - 1  do
        
        if i % 2 == 0 then 
            sum += nums[i]
        end

    end

    return sum

end

array_pair_sum(nums)