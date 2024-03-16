## Description
CHALLENGE #41

Show noobs what coding should be like by golfing all over the classic terminal game "HI-LO"
```
1. User must guess a number between [1, 100]
2. Prompt the user with ">" for a new guess
3. Respond with "+" if too high, "-" if too low
4. Exit when guess is correct, displaying guess count 
```

## Submissions
Piratux C 84 bytes: https://godbolt.org/z/6zMbvaqqG
- x86-64 gcc 13.1
- The guess count is displayed as program's exit code to save bytes.