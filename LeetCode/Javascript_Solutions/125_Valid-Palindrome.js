/**
 * @param {string} s
 * @return {boolean}
 */

// one liner and efficient solution 
var isPalindrome = function (s) {
    let pure = s.toLowerCase().replace(/[^A-Za-z0-9]/g, '');
    return pure.split('').reverse().join('') === pure;
};

// original solution
var isPalindrome = function (s) {
    let pure = s.toLowerCase().replace(/[^A-Za-z0-9]/g, '');
    let left = 0, right = pure.length - 1;
    while (left < right) {
        if (pure[left] !== pure[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
};
