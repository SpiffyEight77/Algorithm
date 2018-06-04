# @param {String} j
# @param {String} s
# @return {Integer}
def num_jewels_in_stones(j, s)
    cnt = 0
        for i in 0..j.length - 1
            for k in 0..s.length - 1
                if s[k] == j[i] then
                    cnt += 1
                end
            end
        end
    return cnt
end
    