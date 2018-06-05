# @param {String} moves
# @return {Boolean}

moves = "LL"

def judge_circle(moves)
    
    x = 0
    y = 0

    for i in 0..moves.length - 1 do
        if moves[i] == "U" then
            y+=1
        elsif moves[i] == "D" then
            y-=1
        elsif moves[i] == "L" then
            x-=1
        elsif moves[i] == "R" then
            x+=1
        end
    end

    if x == 0 && y == 0 then
        return true
    else
        return false
    end
end
p judge_circle(moves)