# @param {Integer[]} widths
# @param {String} s
# @return {Integer[]}

def number_of_lines(widths, s)
    
    line = 1
    sum = 0

    s.each_byte do |x|
        
        if sum + widths[ x - 97] > 100 then
            
            line += 1
            sum = widths[ x - 97]
        else
            sum += widths[ x - 97]
        end 

    end

    return [line,sum]
end