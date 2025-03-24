/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    return (typeof obj == "object" ? Object.keys(obj).length : obj.length) === 0;
};