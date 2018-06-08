# @param {String} s
# @return {String}

s = "Let's take LeetCode contest"

def reverse_words(s)
    s = s.split(" ")
    s.each do |x|
        x.reverse!
    end
    s.join(" ")
end

p reverse_words(s)