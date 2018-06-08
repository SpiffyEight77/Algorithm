# @param {String} s
# @param {Character} c
# @return {Integer[]}

def shortest_to_char(s, c)
    
    dis = []
    pos = []

    for i in 0..s.length-1 do
        if s[i] == c then 
            pos.push(i)
        end
    end

    for i in 0..s.length-1 do
        min = 99999999
        pos.each do |x| 
            if min > (i-x).abs then
                min = (i-x).abs
            end
        end
        dis.push(min)
    end

    return dis
end