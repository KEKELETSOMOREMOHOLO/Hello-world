int main()
{
Ê Êint m, n, c, d, first[10][10], second[10][10], sum[10][10];
Ê
Ê Êprintf("Enter the number of rows and columns of matrix\n");
Ê Êscanf("%d%d", &m, &n);
Ê Êprintf("Enter the elements of first matrix\n");
Ê
Ê Êfor (c = 0; c < m; c++)
Ê Ê Ê for (d = 0; d < n; d++)
Ê Ê Ê Ê Êscanf("%d", &first[c][d]);
Ê
Ê Êprintf("Enter the elements of second matrix\n");
Ê
Ê Êfor (c = 0; c < m; c++)
Ê Ê Ê for (d = 0 ; d < n; d++)
Ê Ê Ê Ê Êscanf("%d", &second[c][d]);
Ê Ê
Ê Êprintf("Sum of entered matrices:-\n");
Ê Ê
Ê Êfor (c = 0; c < m; c++) {
Ê Ê Ê for (d = 0 ; d < n; d++) {
Ê Ê Ê Ê Êsum[c][d] = first[c][d] + second[c][d];
Ê Ê Ê Ê Êprintf("%d\t", sum[c][d]);
Ê Ê Ê }
Ê Ê Ê printf("\n");
Ê Ê}
Ê
Ê Êreturn 0;
}
