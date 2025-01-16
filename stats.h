#ifndef STATS_H__ // header guard: to avoid copying the contents of a given header file more than once
#define STATS_H__

/**
 * average - average of 3 integers
 *
 * @param x - 1st integer
 * @param y - 2nd integer
 * @param z - 3rd integer
 * @return  - Average of the integers
 */
double average(int x, int y, int z);

/**
 * median - median of 3 uniques integers
 *
 * @param x - 1st unique integer
 * @param y - 2nd unique integer
 * @param z - 3rd unique integer
 * @return  - Median of the integers
 */
int median(int x, int y, int z);

/**
 *
 * max - max of 3 integers
 *
 * @param x - 1st integer
 * @param y - 2nd integer
 * @param z - 3rd integer
 * @return  - Max of the integers
 */
int max(int x, int y, int z);

/**
 *
 * min - min of 3 integers
 *
 * @param x - 1st integer
 * @param y - 2nd integer
 * @param z - 3rd integer
 * @return  - Min of the integers
 */
int min(int x, int y, int z);

#endif /* STATS_H */
