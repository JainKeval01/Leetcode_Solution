var longestCommonPrefix = function (strs) {
strs=strs.sort();
let first = strs[0];
let last = strs[strs.length - 1];
let i = 0;
    while (i < first.length && i < last.length) {
        if (first[i] != last[i]) {
            break;
        }
        i++;
    }
    return first.substring(0,i);
};