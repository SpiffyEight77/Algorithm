# @param {String[]} words
# @return {Integer}

def unique_morse_representations(words)
    
    str = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
    
    word = []

    if words.empty? then
        return 0
    end

    words.each do |i|
        s = ""
        i.each_byte do |c|
            s += str[ c - 97 ]
        end
        word.push(s)
    end
    if word.length == 1 then
        return 1
    end
    return word.uniq!.length

end