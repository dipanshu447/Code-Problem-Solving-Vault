/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function (num) {
    const intToRomanMap = [
        {intVal: 1000, romanVal: 'M'},
        {intVal: 900, romanVal: 'CM'},
        {intVal: 500, romanVal: 'D'},
        {intVal: 400, romanVal: 'CD'},
        {intVal: 100, romanVal: 'C'},
        {intVal: 90, romanVal: 'XC'},
        {intVal: 50, romanVal: 'L'},
        {intVal: 40, romanVal: 'XL'},
        {intVal: 10, romanVal: 'X'},
        {intVal: 9, romanVal: 'IX'},
        {intVal: 5, romanVal: 'V'},
        {intVal: 4, romanVal: 'IV'},
        {intVal: 1, romanVal: 'I'}
    ];

    var res = '';
    for(const {intVal, romanVal} of intToRomanMap){
        while(num >= intVal){
            res += romanVal;
            num -= intVal;
        }
    }
    return res;
};
