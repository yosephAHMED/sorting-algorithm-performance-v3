# sorting-algorithm-performance-v3
In this lab, you will implement Quick Sort and Randomized Quicksort algorithm for the same inputs.  For each algorithm, and for each n = 100, 200, 300, 400, 500, 1000, 4000, 10000, measure its running time and number of steps when the input is (1) already sort, i.e. n, n-1, …, 3, 2,1; (2) reversely sorted 1, 2, 3, … n; (3) random permutation of 1, 2, …, n; (4) 50 instances of n random numbers generated in the range of [1..n].  Note:  (1) You may have to repeat the algorithm many times, each time you need to initialize the array.  (2) Your running time should exclude the time for initialization.   (3) All measurement should be done in a single run, i.e. you do not need to run once for n=100, another time for n=200, etc     What to turn in:  (1) Well documented source code in C++  (2) Report the number of steps and the CPU running time in a table (Add this result in your previous table).  (3) Plot the running time of the algorithm results (Add this result in your previous plot).  Due on 11/17/2020

## Note:

(1) You may have to repeat the algorithm many times, each time you need to initialize the array.

(2) Your running time should exclude the time for initialization. 

(3) All measurement should be done in a single run, i.e. you do not need to run once for n=100, another time for n=200, etc

 

What to turn in:

(1) Well documented source code in C++

(2) Report the number of steps and the CPU running time in a table (Add this result in your previous table).

(3) Plot the running time of the algorithm results (Add this result in your previous plot).

(4) Approximation the constant c in the complexity of heap sort (cnlgn) by inspecting the results


## Raw Results:
### https://raw.githubusercontent.com/yosephAHMED/sorting-algorithm-performance-v3/main/results.txt

## Analysis:
### Insertion Sort Runtime Performance (ms)
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 0.7132  | 0.0082 | 0.3781 | 0.404686 |
| `200` | 3.3008 | 0.0159 | 1.4857 | 1.68341 |
| `300` | 7.8188 | 0.0242 | 3.3098 | 3.52041 |
| `400` | 13.1222 | 0.0326 | 6.5362 | 6.59068 |
| `500` | 20.7776 | 0.0416 | 10.1424 | 10.0679 |
| `1000` | 81.2341 | 0.1 | 40.4523 | 39.6384 |
| `4000` | 1274.29 | 0.2517 | 610.513 | 601.964 |
| `10000` | 7227.57 | 0.6715 | 3663.96 | 3714.2 |

<a href="https://gist.githubusercontent.com/yosephAHMED/1b64610bd5942dd886dced5bd19853a0/raw/8b7fa99ec8ff80e458ce7f77da55db0f12092a00/Insertion_Sort_Performance.svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/1b64610bd5942dd886dced5bd19853a0/raw/8b7fa99ec8ff80e458ce7f77da55db0f12092a00/Insertion_Sort_Performance.svg">
</a>

### Merge Sort Runtime Performance (ms)
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 0.661  | 0.6421 | 0.7005 | 0.729274 |
| `200` | 1.4869 | 1.4915 | 1.5681 | 1.5668 |
| `300` | 2.2633 | 2.2484 | 2.3738 | 2.22918 |
| `400` | 2.9216 | 3.0404 | 3.2165 | 3.151 |
| `500` | 3.8131 | 3.8029 | 3.977 | 3.90081 |
| `1000` | 7.8411 | 7.6145 | 8.0108 | 7.94268 |
| `4000` | 30.1174 | 23.7499 | 25.8347 | 31.1511 |
| `10000` | 68.6914 | 71.6666 | 76.0117 | 81.1904 |

<a href="https://gist.githubusercontent.com/yosephAHMED/a027ccf406a2a72c2e07672fb7a28a75/raw/d8df8aeb8229a9fd98df50d0348b74fcfb2162a2/Merge_Sort_Performance.svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/a027ccf406a2a72c2e07672fb7a28a75/raw/d8df8aeb8229a9fd98df50d0348b74fcfb2162a2/Merge_Sort_Performance.svg">
</a>

### Heap Sort Runtime Performance (ms)
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 0.0899  | 0.1101 | 0.1001 | 0.102672 |
| `200` | 0.2106 | 0.2527 | 0.2326 | 0.239404 |
| `300` | 0.347 | 0.4063 | 0.3825 | 0.389242 |
| `400` | 0.4945 | 0.5694 | 0.829 | 0.56078 |
| `500` | 0.6411 | 0.921 | 0.7032 | 0.72142 |
| `1000` | 1.4486 | 1.6447 | 1.5759 | 1.5719 |
| `4000` | 7.2739 | 7.9386 | 7.6866 | 7.6876 |
| `10000` | 20.2221 | 24.0676 | 21.4381 | 21.7895 |

<a href="https://gist.githubusercontent.com/yosephAHMED/519c2aefda863e67ba4f5cd2defbdb3e/raw/0aa554bc97d25f66d56a9fc5bf004e7c59d8b009/HeapSort.svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/519c2aefda863e67ba4f5cd2defbdb3e/raw/0aa554bc97d25f66d56a9fc5bf004e7c59d8b009/HeapSort.svg">
</a>

### Quick Sort Runtime Performance (ms)
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 0.0821  | 0.0687 | 0.1318 | 0.134758 |
| `200` | 0.1204 | 0.1007 | 0.1954 | 0.29601 |
| `300` | 0.3275 | 0.2803 | 0.4314 | 0.467224 |
| `400` | 0.351 | 0.3152 | 0.6502 | 0.67704 |
| `500` | 0.5126 | 0.4678 | 0.9928 | 0.835098 |
| `1000` | 0.9717 | 0.8417 | 1.8451 | 1.83375 |
| `4000` | 4.7575 | 4.3365 | 9.9125 | 8.59841 |
| `10000` | 8.0692 | 7.148 | 25.7332 | 23.4185 |

<a href="https://gist.githubusercontent.com/yosephAHMED/abb13c77c0e2c822312e2bf704de17f2/raw/c20de99e7bba9ef077b4665c8e539d547891a88f/chart%2520(8).svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/abb13c77c0e2c822312e2bf704de17f2/raw/c20de99e7bba9ef077b4665c8e539d547891a88f/chart%2520(8).svg">
</a>

### Randomized Quick Sort Runtime Performance (ms)
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 0.2677  | 0.2687 | 0.1318 | 0.134758 |
| `200` | 0.1204 | 0.1007 | 0.1954 | 0.29601 |
| `300` | 0.3275 | 0.2803 | 0.4314 | 0.467224 |
| `400` | 0.351 | 0.3152 | 0.6502 | 0.67704 |
| `500` | 0.5126 | 0.4678 | 0.9928 | 0.835098 |
| `1000` | 0.9717 | 0.8417 | 1.8451 | 1.83375 |
| `4000` | 4.7575 | 4.3365 | 9.9125 | 8.59841 |
| `10000` | 8.0692 | 7.148 | 25.7332 | 23.4185 |

<a href="https://gist.githubusercontent.com/yosephAHMED/abb13c77c0e2c822312e2bf704de17f2/raw/c20de99e7bba9ef077b4665c8e539d547891a88f/chart%2520(8).svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/abb13c77c0e2c822312e2bf704de17f2/raw/c20de99e7bba9ef077b4665c8e539d547891a88f/chart%2520(8).svg">
</a>



### Average C approximations for Insertion Sort
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 3.5551 | 0.0298 | 1.8197 | 1.739 |
| `200` | 3.49745 | 0.01495 | 1.55285 | 1.75162 |
| `300` | 3.49831 | 0.00997778 | 1.57961 | 1.75683 |
| `400` | 3.49874 | 0.0074875 | 1.72936 | 1.74756 |
| `500` | 3.49899 | 0.005992 | 1.72598 | 1.75616 |
| `1000` | 3.4995 | 0.002998 | 1.72187 | 1.74925 |
| `4000` | 3.49987 | 0.000749875 | 1.7119 | 1.74857 |
| `10000` | 3.49995 | 0.00029998 | 1.74479 | 1.7511 |
| --- | --- | --- | --- | --- |
| **Average** | 3.50598875 | 0.009031891875 | 1.6982575 | 1.75001125 |
| **Average of averages** | 1.7408223479687 |

<a href="https://gist.githubusercontent.com/yosephAHMED/57e21327b739594cc26b36dc77a39d89/raw/3853f43d1d0763bb953ee860c7ac1af750771015/Insertion_Sort_C_Approximation.svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/57e21327b739594cc26b36dc77a39d89/raw/3853f43d1d0763bb953ee860c7ac1af750771015/Insertion_Sort_C_Approximation.svg">
</a>

### Average C approximations for Merge Sort
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 9.10281 | 9.10281 | 11.6195 | 11.6717 |
| `200` | 8.682 | 8.682 | 11.3781 | 11.3772 |
| `300` | 8.46222 | 8.46222 | 11.2124 | 11.2493 |
| `400` | 8.35188 | 8.35188 | 11.1746 | 11.1467 |
| `500` | 8.31074 | 8.31074 | 11.0385 | 11.0437 |
| `1000` | 8.05819 | 8.05819 | 10.8798 | 10.8785 |
| `4000` | 7.67731 | 7.67731 | 10.6339 | 10.6295 |
| `10000` | 7.44433 | 7.44433 | 10.5372 | 10.5352 |
| --- | --- | --- | --- | --- |
| **Average** | 8.261185 | 8.261185 | 11.05925 | 11.066475 |
| **Average of averages** | 9.66202375 |

<a href="https://gist.githubusercontent.com/yosephAHMED/4241617bb803a9d3d39a6260b95b8558/raw/21a6b219a1b2ed4cca90af7816bb6cf3d3be6a6a/Merge_Sort_C_Approximation.svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/4241617bb803a9d3d39a6260b95b8558/raw/21a6b219a1b2ed4cca90af7816bb6cf3d3be6a6a/Merge_Sort_C_Approximation.svg">
</a>

### Average C approximations for Heap Sort
| Input Size | Reversely Sorted | Sorted | Random Permutation | 50 Instances of Random Input |
| --- | --- | --- | --- | --- |
| `100` | 16.5314 | 13.5695 | 15.0982 | 15.1308 |
| `200` | 16.5062 | 13.5788 | 15.0529 | 15.1709 |
| `300` | 16.4704 | 13.7961 | 15.2104 | 15.1572 |
| `400` | 16.4046 | 13.8802 | 15.2984 | 15.225 |
| `500` | 16.3058 | 13.9056 | 15.2296 | 15.1714 |
| `1000` | 16.2587 | 14.042 | 15.2141 | 15.2601 |
| `4000` | 16.2944 | 14.4025 | 15.3421 | 15.3528 |
| `10000` | 16.357 | 14.5345 | 15.4357 | 15.4304 |
| --- | --- | --- | --- | --- |
| **Average** | 16.3910625 | 13.96365 | 15.235175 | 15.237325 |
| **Average of averages** |15.206803125 |

<a href="https://gist.githubusercontent.com/yosephAHMED/6b05590c50ed31791b14145f5ec28747/raw/a8996622ef16fddac9e75724b06c6b7e449df031/HeapSortCApprox.svg">
  <img src="https://gist.githubusercontent.com/yosephAHMED/6b05590c50ed31791b14145f5ec28747/raw/a8996622ef16fddac9e75724b06c6b7e449df031/HeapSortCApprox.svg">
</a>

## Conclusion:
For sorted inputs, it appears that insertion sort is faster than merge sort across all input size (n). Contrary to expecected findings, the results for running performance of Heap Sort is somehow much better than Insertion and Merge sort algorithms. Furthermore, it is found that for Heap Sort, the approximation of C is much larger than that of Insertion and Merge Sort.
