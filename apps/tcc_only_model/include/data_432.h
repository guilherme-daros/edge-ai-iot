#include "point.h"

constexpr std::array<point, 432> vec432 = {
    {{1916, 2391, 2013}, {2044, 2187, 1929}, {2021, 2533, 2036},
     {2021, 2386, 1909}, {1829, 2287, 1851}, {1912, 2352, 1963},
     {1767, 2279, 1850}, {2038, 2419, 2034}, {1917, 2391, 1995},
     {2077, 2405, 2067}, {1797, 2343, 1963}, {2078, 2540, 2068},
     {1880, 2351, 2039}, {1913, 2396, 2038}, {1801, 2346, 1829},
     {1872, 2356, 1924}, {1833, 2560, 1939}, {1787, 2266, 1850},
     {1702, 1867, 2034}, {2076, 2535, 2064}, {2072, 2540, 2094},
     {2113, 2366, 2000}, {2082, 2541, 2001}, {1945, 2369, 1918},
     {2041, 2377, 2040}, {2091, 2551, 2060}, {1873, 2343, 1965},
     {1911, 2375, 2100}, {1974, 2371, 2126}, {2015, 2531, 2031},
     {2017, 2393, 1928}, {2086, 2360, 1955}, {1858, 2384, 2002},
     {1971, 2274, 1749}, {2077, 2536, 2041}, {2079, 2519, 2022},
     {1868, 2348, 2005}, {1758, 2350, 1791}, {1931, 2350, 1957},
     {1919, 2341, 1927}, {1905, 2349, 1923}, {1865, 2250, 1970},
     {2025, 2399, 1930}, {1951, 2271, 1929}, {1883, 2356, 1979},
     {2055, 2545, 2093}, {2093, 2396, 1901}, {1920, 2351, 1987},
     {2101, 2535, 2005}, {1809, 2336, 1993}, {2120, 2534, 2000},
     {1907, 2335, 1947}, {1826, 2352, 2030}, {1875, 2379, 2003},
     {1904, 2389, 2010}, {2073, 2469, 2059}, {1925, 2347, 1951},
     {2097, 2557, 1984}, {1826, 2326, 2142}, {1789, 2253, 1835},
     {2117, 2353, 1977}, {2029, 2560, 1976}, {1848, 2369, 2056},
     {2130, 2472, 1869}, {2068, 2541, 2063}, {2074, 2362, 1917},
     {1688, 2392, 2019}, {1962, 2366, 2140}, {1923, 2389, 1932},
     {1885, 2381, 1987}, {1806, 2266, 1786}, {1854, 2371, 2130},
     {1930, 2339, 2010}, {2069, 2546, 2058}, {2117, 2479, 1883},
     {2106, 2531, 2007}, {1918, 2346, 1933}, {2067, 2489, 1878},
     {1980, 2277, 1750}, {2143, 2346, 1974}, {2105, 2524, 2004},
     {2196, 2296, 1772}, {2081, 2374, 2017}, {2053, 2386, 2021},
     {2108, 2542, 2066}, {2135, 2287, 1973}, {1914, 2342, 1922},
     {2109, 2537, 1992}, {1804, 2234, 1810}, {1963, 2375, 2116},
     {1752, 2198, 1862}, {2117, 2535, 2032}, {2076, 2223, 2029},
     {1994, 2347, 2015}, {2291, 2741, 1907}, {1870, 2381, 2067},
     {1874, 2383, 2062}, {2021, 2379, 1903}, {1754, 2191, 1817},
     {1986, 2396, 1984}, {1949, 2373, 1914}, {2022, 2374, 2016},
     {2107, 2485, 1883}, {1978, 2283, 1759}, {1976, 2347, 2005},
     {2109, 2533, 2001}, {1864, 2373, 1971}, {1827, 2324, 1951},
     {1888, 2379, 2076}, {2043, 2402, 1949}, {1906, 2389, 1991},
     {1893, 2383, 1971}, {1855, 2356, 1916}, {2018, 2384, 2031},
     {2050, 2531, 2081}, {1901, 2370, 1905}, {2027, 2382, 2058},
     {1768, 2276, 1917}, {1931, 2355, 1938}, {2144, 2327, 2021},
     {2057, 2404, 1933}, {1899, 2350, 1991}, {2056, 2539, 2086},
     {2159, 2284, 1927}, {1861, 2371, 2046}, {2008, 2266, 1612},
     {1900, 2261, 2025}, {1881, 2373, 1964}, {2106, 2353, 1996},
     {1902, 2386, 2000}, {2023, 2529, 2034}, {2013, 2361, 1904},
     {1900, 2419, 2096}, {2038, 2392, 1897}, {2068, 2375, 1979},
     {2023, 2534, 2024}, {1894, 2347, 2026}, {1944, 2394, 2077},
     {2064, 2537, 1998}, {2110, 2266, 1744}, {1961, 2364, 1911},
     {2101, 2535, 2011}, {2012, 2283, 1863}, {2027, 2410, 1951},
     {1838, 2369, 2027}, {2003, 2386, 1948}, {1911, 2475, 2034},
     {2035, 2325, 2131}, {2102, 2516, 1958}, {2097, 2531, 1991},
     {1949, 1982, 1633}, {1884, 2348, 2120}, {2115, 2488, 1885},
     {2194, 2278, 1778}, {1842, 2273, 1954}, {2162, 2309, 1797},
     {1876, 2365, 1978}, {1960, 2383, 2114}, {1960, 2359, 1900},
     {1917, 2308, 1833}, {1937, 2422, 2014}, {1987, 2359, 1897},
     {2006, 2507, 1852}, {2089, 2315, 1960}, {2040, 2195, 2033},
     {1878, 2343, 1987}, {1949, 2499, 1959}, {1904, 2360, 1987},
     {1964, 2377, 2116}, {2009, 2530, 2032}, {2008, 2385, 2003},
     {1908, 2343, 1929}, {2059, 2392, 2134}, {2053, 2335, 2053},
     {1940, 2287, 1987}, {1987, 2278, 1751}, {1916, 2263, 2085},
     {2131, 2534, 2044}, {1965, 2336, 2153}, {1827, 2385, 1962},
     {1895, 2356, 1883}, {2119, 2485, 1879}, {2198, 2273, 1805},
     {1989, 2517, 2079}, {2098, 2195, 2037}, {1899, 2242, 1960},
     {2026, 2361, 2020}, {2053, 2413, 1882}, {1908, 2454, 2020},
     {1931, 2304, 1850}, {2002, 2348, 2006}, {2054, 2334, 2004},
     {1959, 2367, 2121}, {1827, 2379, 2062}, {2003, 2348, 2016},
     {2074, 2711, 2062}, {2130, 2379, 1907}, {1809, 2335, 1997},
     {2103, 2480, 1858}, {2138, 2440, 1845}, {2108, 2569, 2072},
     {2069, 2555, 1970}, {1799, 2293, 1883}, {2080, 2541, 2064},
     {2098, 2311, 1930}, {2165, 2336, 1993}, {1841, 2373, 1986},
     {1876, 2315, 1978}, {2022, 2398, 1935}, {1956, 2328, 2044},
     {1904, 2386, 2007}, {2039, 2037, 1659}, {1902, 2333, 1823},
     {1950, 2362, 1999}, {1889, 2385, 1991}, {2071, 2369, 1863},
     {2039, 2529, 2126}, {2108, 2311, 1928}, {1907, 2349, 2194},
     {1881, 2347, 2022}, {1937, 2367, 2015}, {1928, 2356, 2000},
     {1947, 2322, 1920}, {1971, 2394, 1984}, {1897, 2357, 1991},
     {1943, 2311, 2024}, {2172, 2301, 1799}, {2073, 2377, 1979},
     {2042, 2453, 1975}, {1914, 2344, 1918}, {2117, 2538, 2039},
     {1923, 2345, 1938}, {1908, 2323, 2036}, {2021, 2359, 1872},
     {1803, 2484, 2027}, {2197, 2323, 2026}, {2080, 2543, 2054},
     {2169, 2325, 1997}, {2030, 2385, 2020}, {2029, 2510, 1831},
     {2085, 2538, 2056}, {1911, 2309, 1835}, {2059, 2392, 1915},
     {2077, 2546, 2053}, {1874, 2373, 1971}, {1961, 2250, 1742},
     {1897, 2350, 1878}, {2012, 2372, 1867}, {2116, 2558, 2006},
     {1952, 2329, 1917}, {1989, 2398, 1948}, {1862, 2377, 2041},
     {2039, 2281, 1996}, {1925, 2353, 2005}, {1785, 2339, 1794},
     {1887, 2379, 1982}, {2104, 2302, 1919}, {2019, 2389, 2037},
     {2063, 2536, 2094}, {2055, 2385, 1889}, {2069, 2537, 2061},
     {2078, 2535, 2007}, {1929, 2383, 2078}, {2067, 2538, 2063},
     {1908, 2361, 1890}, {2010, 2231, 1743}, {2002, 2382, 1943},
     {2004, 2509, 2149}, {1991, 2387, 2020}, {1863, 2375, 2051},
     {1905, 2359, 1905}, {1986, 2278, 1761}, {2206, 2241, 1744},
     {1864, 2352, 1995}, {1864, 2372, 2055}, {1972, 2287, 1765},
     {1906, 2367, 1751}, {2147, 2346, 1998}, {2071, 2372, 1986},
     {1883, 2371, 1941}, {1801, 2420, 1980}, {1921, 2339, 1911},
     {1965, 2507, 2055}, {2021, 2387, 2032}, {1997, 2366, 1919},
     {1862, 2373, 2075}, {1870, 2355, 2021}, {1938, 2384, 2097},
     {2033, 2356, 2033}, {1954, 2337, 2121}, {2077, 2542, 2064},
     {1919, 2353, 1938}, {2025, 2384, 1903}, {1913, 2348, 1918},
     {1947, 2434, 1939}, {1761, 2315, 2017}, {1973, 2377, 1902},
     {1820, 2573, 1967}, {1903, 2364, 1908}, {2062, 2301, 1916},
     {2086, 2321, 1964}, {1996, 2350, 2022}, {2027, 2536, 2033},
     {1908, 2380, 1938}, {2067, 2388, 2185}, {1680, 2457, 1768},
     {1880, 2334, 1845}, {1975, 2370, 2125}, {2005, 2411, 2026},
     {1882, 2382, 1979}, {2066, 2566, 2113}, {2110, 2558, 2046},
     {2165, 2309, 1799}, {2146, 2487, 1902}, {2106, 2419, 1873},
     {1872, 2379, 2004}, {2053, 2501, 1797}, {1807, 2342, 1999},
     {2178, 2303, 1790}, {1823, 2333, 1984}, {2115, 2547, 2016},
     {2075, 2540, 2062}, {1927, 2342, 1912}, {2016, 2399, 1933},
     {1796, 2505, 1937}, {1772, 2404, 1975}, {2013, 2531, 2022},
     {2029, 2375, 2043}, {2121, 2533, 2000}, {2049, 2310, 1907},
     {2052, 2375, 2106}, {1918, 2354, 2000}, {2007, 2331, 2010},
     {1878, 2380, 2049}, {1897, 2354, 2043}, {1707, 2471, 1897},
     {1875, 2373, 1945}, {2098, 2314, 1976}, {2119, 2551, 1963},
     {2098, 2203, 2029}, {1908, 2391, 1982}, {2039, 2399, 1924},
     {1870, 2372, 2068}, {1888, 2363, 2020}, {1879, 2346, 1876},
     {1945, 2354, 1977}, {1915, 2388, 1983}, {2054, 2363, 2096},
     {1852, 2331, 1930}, {1722, 2313, 2057}, {2043, 2508, 1915},
     {2136, 2496, 2039}, {2027, 2346, 1840}, {2182, 2316, 2004},
     {1972, 2351, 1995}, {1924, 2448, 2014}, {2205, 2275, 2045},
     {2123, 2481, 1911}, {1929, 2349, 2006}, {2104, 2541, 1999},
     {1944, 2500, 2081}, {1819, 2351, 2000}, {1911, 2345, 1934},
     {2079, 2539, 2061}, {2173, 2278, 1942}, {1836, 2332, 1952},
     {1866, 2355, 2109}, {2032, 2547, 2087}, {1774, 2279, 1991},
     {2157, 2627, 1855}, {2027, 2358, 1871}, {2048, 2201, 2063},
     {2109, 2490, 1885}, {2113, 2513, 2057}, {1886, 2356, 1997},
     {2099, 2533, 2061}, {2021, 2385, 2033}, {2070, 2519, 2082},
     {1818, 2274, 1871}, {2143, 2345, 1970}, {1931, 2347, 2007},
     {1722, 2307, 1911}, {2157, 2368, 1879}, {1991, 2004, 1648},
     {2041, 2359, 1881}, {1895, 2190, 1980}, {1761, 2468, 1977},
     {2103, 2537, 2001}, {1998, 2484, 1765}, {1901, 2314, 1982},
     {2148, 2296, 1962}, {1967, 2383, 2087}, {1993, 2387, 2013},
     {1967, 2371, 2218}, {1922, 2349, 1935}, {1978, 2340, 2012},
     {1892, 2383, 2005}, {2024, 2398, 1933}, {1945, 2226, 1966},
     {1800, 2247, 1932}, {1868, 2397, 2007}, {2077, 2535, 1981},
     {2002, 2345, 2055}, {1907, 2337, 1917}, {2006, 2522, 1959},
     {2011, 2432, 2002}, {2058, 2429, 1900}, {1946, 2356, 1967},
     {1876, 2336, 1923}, {2094, 2325, 1979}, {2030, 2537, 2032},
     {1974, 2276, 1749}, {2087, 2481, 1896}, {2020, 2381, 2037},
     {1906, 2355, 2199}, {1885, 2387, 2031}, {2047, 2311, 1865},
     {1968, 2377, 2126}, {2017, 2535, 2034}, {1967, 2353, 2003},
     {2059, 2351, 1817}, {2075, 2537, 2047}, {2053, 2364, 2014},
     {2001, 2509, 2083}, {2005, 2380, 1882}, {2087, 2540, 2060},
     {1922, 2356, 2058}, {2049, 2289, 2015}, {1759, 2241, 1787},
     {2034, 2353, 1864}, {1908, 2351, 2185}, {1924, 2339, 1983}}};