/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    const res = [];
    function flatning(arr, depth){
        for(let val of arr){
            if(typeof val === 'object' && depth < n){
                flatning(val, depth + 1);
            }else {
                res.push(val);
            }
        }
        return res;
    }    
    return flatning(arr,0);
};
