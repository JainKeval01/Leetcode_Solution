var longestCommonPrefix = function(strs) {
    let temp = strs[0];
    for (let i = 0; i < strs[0].length; i++) {
        let ch = strs[0][i];
        for (let j = 1; j < strs.length; j++) {
            if (i >= strs[j].length || strs[j][i] !== ch) {
                return temp.substring(0,i);
            }
        }
    }
    return temp;
};