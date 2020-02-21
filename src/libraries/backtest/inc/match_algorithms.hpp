// Copyright 2019 Stewart Henderson. All rights reserved.

#pragma once
#ifndef __MATCH_ALGORITHMS__
#define __MATCH_ALGORITHMS__

/**
 * CME Matching and Fill algorithms:
 *  https://www.cmegroup.com/confluence/display/EPICSANDBOX/CME+Globex+Matching+Algorithm+Steps
 *  https://www.cmegroup.com/confluence/display/EPICSANDBOX/CME+Globex+Matching+Algorithms
 *  https://www.cmegroup.com/confluence/display/EPICSANDBOX/Complex+Match+Example
 * StackOverflow Topic:
 *  https://stackoverflow.com/questions/13112062/which-are-the-order-matching-algorithms-most-commonly-used-by-electronic-financi
 */

enum class MatchAlgorithm {
  ProRata,
  /**
   * FIFO stands for First In, First Out. During FIFO, resting orders are
   * matched in timestamp order only. All orders are matched in the timestamp
   * order in which they were received (i.e. earliest timestamp is first,
   * followed by next earliest, etc.).
   */
  FirstInFirstOut,
  LastInFirstOut,
  LeadMarketMaker,
};

#endif  //__MATCH_ALGORITHMS__