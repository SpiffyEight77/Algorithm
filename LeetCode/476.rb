# @param {Integer} num
# @return {Integer}

def find_complement(num)
    
    s = num.to_s(2)
    for i in 0..s.length - 1 do
        if s[i] == '0' then
            s[i] = '1'
        else
            s[i] = '0'
        end
    end
    return s.to_i(2)
end