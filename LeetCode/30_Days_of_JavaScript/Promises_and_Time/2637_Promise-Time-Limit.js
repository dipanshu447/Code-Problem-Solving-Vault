/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */

// lengthy traditional solution
var timeLimit = function (fn, t) {
    return async function (...args) {
        return new Promise((resolve, reject) => {
            const id = setTimeout(() => reject("Time Limit Exceeded"), t);
            fn(...args).then((result) => resolve(result))
                       .catch((err) => reject(err))
                       .finally(() => clearTimeout(id));
        });
    }
};

// short but same as above 
var timeLimit = function (fn, t) {
    return async function (...args) {
        return new Promise((resolve, reject) => {
            const id = setTimeout(() => reject("Time Limit Exceeded"), t);
            fn(...args).then(resolve).catch(reject).finally(() => clearTimeout(id));
        });
    }
};

// another solution using await instead of .then,.catch etc.
var timeLimit = function (fn, t) {
    return async function (...args) {
        return new Promise(async (resolve, reject) => {
            const id = setTimeout(() => reject("Time Limit Exceeded"), t);
            try {
                let result = await fn(...args);
                resolve(result);
            } catch (err) {
                reject(err);
            }
        });
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */