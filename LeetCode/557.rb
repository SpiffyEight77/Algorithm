# @param {String} s
# @return {String}

def reverse_words(s)
    s = s.split(" ")
    s.each do |x|
        x.reverse!
    end
    s.join(" ")
end