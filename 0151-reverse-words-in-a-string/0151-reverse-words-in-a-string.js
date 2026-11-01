/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let arr = s.trim().split(/\s+/);
    arr=arr.reverse();
    s=arr.join(" ");
    return s;
};
