# @param {Integer} left
# @param {Integer} right
# @return {Integer[]}

def self_dividing_numbers(left, right)
    
    res = []

    for i in left..right do
        
        x = i
        s = x.to_s
        f = true
        for i in 0..s.length - 1 do

            if s[i] == '0' || x % s[i].to_i != 0 then
                f = false
            end
        end

        if f == true then
            res.push(x)
        end
    end
    return res
end