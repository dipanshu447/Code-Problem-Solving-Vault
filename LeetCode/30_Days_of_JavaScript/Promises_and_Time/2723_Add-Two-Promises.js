/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function (promise1, promise2) {
    return await promise1 + await promise2;
};

// Another solution i tried
/* var addTwoPromises = async function (promise1, promise2) {
    return Promise.all([promise1, promise2]).then((data) => data.reduce((a, b) => a + b))
}; */

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */