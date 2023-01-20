// for every number between 0 and max find all numbers that have square roots that are integers
// getNumbersWithSquareRoots(17) => [0, 1, 4, 9, 16]

function getNumbersWithSquareRoots(max)
{

	const odd_numbers = [];
	const square_roots = [];
	let current = 0;
	let increment = 0;
	let accepted = 0;
	let flag = 'do'

	for (let index = 0; index < max; index++)
	{
		if ((index / 2) % 1 != 0)
		{
			odd_numbers[current] = index;
			current++;
		}
		else
		{
			continue;
		}
	}

	for (let index = 0; index < max; index++)
	{
		while (flag != 'done')
		{
			current = index - odd_numbers[increment];

			if (current == 0)
			{
				square_roots[accepted] = index;
				accepted++;
				flag = 'done';
			}
			else if (current <= -1)
			{
				flag = 'done';
			}
			else
			{
				continue
			}
			increment++;
		}
		flag = 'do'
	}
	console.log(square_roots);
}

getNumbersWithSquareRoots(50)
