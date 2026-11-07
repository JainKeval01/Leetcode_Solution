/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function (words) {
    let row1 = "QWERTYUIOP";
    let row2 = "ASDFGHJKL";
    let row3 = "ZXCVBNM";
    let ans = [];
    for (let i = 0; i < words.length; i++) {
    let valid = true;
       let word= words[i].toUpperCase();
        if (row1.includes(word[0])) {
            for (let j = 1; j < words[i].length; j++) {
                if (!row1.includes(word[j])){
                    valid = false;
                    break
                }
            }
        } else if (row2.includes(word[0])) {
            for (let j = 1; j < words[i].length; j++) {
                if (!row2.includes(word[j])){
                valid = false;
                    break
                }
            }
        } else if (row3.includes(word[0])) {
            for (let j = 1; j < words[i].length; j++) {
                if (!row3.includes(word[j])){
                valid = false;
                    break
                }
            }
        } else {
            return ans;
        }
        if (valid == true) {
            ans.push(words[i]);
        }
    }
        return ans;

};