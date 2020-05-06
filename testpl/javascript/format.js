/**
 * Function arguments tests
 */
function params(a)
{
	// arguments is an Array-like object, has a length and indexed from zero, doesn't have Array's build-in methods.
	var i;
	for (i = 0; i < arguments.length; ++i) {
		console.log(arguments[i]);
	}
	/*arguments.forEach(function(i) {
		console.log(i);
	});*/
	
}

function params_es6(a, ...rest)
{
	console.log(a);
	rest.forEach(function(i) {
		console.log(i);
	});
}

params(1, 2, 3, 4, 5);
params_es6(6, 7, 8, 9, 0);

/**
 * RegExp test
 */
let re = /{(\d+)}/g;
console.log( re.exec('H{e}llo {0}World!${1}') );

/**
 * C# String.Format
 * weak variant
 */
function Format(string, ...object)
{
	return string.replace(/{(\d+)}/g, function(s, d, index, input) {
		return object[d] || '';
	});
}
console.log(Format('{1} {0}! {3}', 'World', 'Hello'));

/**
 * C# String.Format
 * strong variant
 * throws exception
 */
CSharp = {
	String: {
		Format: function(string, ...object)
		{
			return string.replace(/{(\d+)}/g, function(s, d, index, input) {
				if (object[d] == undefined) {
					throw { name: 'FormatException', message: 'Index (zero based) must be greater than or equal to zero and less than the size of the argument list.' };
				}
				return object[d];
			});
		}
	}
}
try {
	console.log(CSharp.String.Format('{1} {0}! {d3}', 'World', 'Hello'));
}
catch (e) {
	// console.log(e instanceof Error);
	console.log(e);
}
