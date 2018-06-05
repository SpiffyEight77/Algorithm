# @param {Integer[][]} a
# @return {Integer[][]}

def flip_and_invert_image(a)

    a.each do |x|
        x.reverse!
        for i in 0..x.length-1 do
            if x[i] == 0 then
                x[i] = 1
            else
                x[i] = 0
            end
        end
    end

    return a
end