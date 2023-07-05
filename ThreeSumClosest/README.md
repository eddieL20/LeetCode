#Notes
___
```
[-1, 2, 1, 4], target = 2, n = 4
```
###Return the sum of the three integers cloest to the target

* range of values ``-1000 <= nums[i] <= 1000``
  * ``result = 1000`` 
* create a for loop starting at ``i=0``
  * 1<sup>st</sup> index is ``i``
  * 2<sup>nd</sup> index is ``left = i+1``
  * 3<sup>rd</sup> index is ``right = n-1``
* put the vector values in order `` [-1, 1, 2, 4] ``

---

###First iteration
```
nums[0] + nums[1] + nums[3] --> -1 + 1 + 4 = 4
```
* ``result = 4`` because `4 < result `
* if the result is larger than target, then move ``right`` to the left
* `left` must always be ***less than*** `right`


```
nums[0] + nums[1] + nums[2] --> -1 + 1 + 2 = 2
 ```
* `result = 2` because `2 < result`
* if `result == target` then return `result`