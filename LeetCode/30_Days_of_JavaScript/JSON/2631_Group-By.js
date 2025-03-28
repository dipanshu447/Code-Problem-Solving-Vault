/**
 * @param {Function} fn
 * @return {Object}
 */
// efficient solution
Array.prototype.groupBy = function(fn) {
    return this.reduce((res,obj) => {
        const key = fn(obj);
        (res[key] ||= []).push(obj);
        return res;
    },{})
};

// original solution
Array.prototype.groupBy = function(fn) {
    const res = {};
    for(let obj of this){
        const key = fn(obj);
        res[key] = res[key] || []; 
        res[key].push(obj);
    }
    return res;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */
