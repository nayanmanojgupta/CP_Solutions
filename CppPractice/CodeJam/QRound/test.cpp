import java.util.*;

public class Solution {
  static final int p_num = 100;
  static final int q_num = 10000;
  static final Random RANDOM = new Random();

  public static void main(String[] args) {
    Scanner inp = new Scanner(System.in);

    int T = inp.nextInt();
    inp.nextInt();
    for (int tc = 1; tc <= T; ++tc) {
      String[] outcomes = new String[p_num];
      for (int i = 0; i < outcomes.length; ++i) {
        outcomes[i] = inp.next();
      }

      System.out.println(String.format("Case #%d: %d", tc, solve(outcomes)));
    }

    inp.close();
  }

  static int solve(String[] outcomes) {
    int[] playerCorrectNums =
        Arrays.stream(outcomes)
            .mapToInt(s -> (int) s.chars().filter(ch -> ch == '1').count())
            .toArray();
    int[] sortedPlayers =
        IntStream.range(0, p_num)
            .boxed()
            .sorted(Comparator.comparing(i -> playerCorrectNums[i]))
            .mapToInt(x -> x)
            .toArray();
    double[] s = new double[p_num];
    for (int i = 0; i < s.length; ++i) {
      s[sortedPlayers[i]] = -3 + 6.0 / (p_num - 1) * i;
    }

    int[] questionCorrectNums =
        IntStream.range(0, q_num)
            .map(
                i ->
                    (int)
                        Arrays.stream(outcomes).filter(outcome -> outcome.charAt(i) == '1').count())
            .toArray();
    int[] sortedQuestions =
        IntStream.range(0, q_num)
            .boxed()
            .sorted(Comparator.comparing(i -> questionCorrectNums[i]))
            .mapToInt(x -> x)
            .toArray();
    double[] q = new double[q_num];
    for (int i = 0; i < q.length; ++i) {
      q[sortedQuestions[i]] = 3 - 6.0 / (q_num - 1) * i;
    }

    int[] diffs = new int[p_num];
    for (int i = 1; i < p_num - 1; ++i) {
      diffs[i] =
          simulate(
              q,
              outcomes[sortedPlayers[i]],
              s[sortedPlayers[i]],
              outcomes[sortedPlayers[i - 1]],
              s[sortedPlayers[i - 1]],
              outcomes[sortedPlayers[i + 1]],
              s[sortedPlayers[i + 1]]);
    }
    System.err.println(Arrays.toString(Arrays.stream(diffs).sorted().toArray()));

    int[] sortedDiffs =
        Arrays.stream(diffs).boxed().sorted(Comparator.reverseOrder()).mapToInt(x -> x).toArray();
    if (sortedDiffs[0] - sortedDiffs[1] >= 50) {
      return sortedPlayers[
              IntStream.range(1, p_num - 1)
                  .boxed()
                  .max(Comparator.comparing(i -> diffs[i]))
                  .get()]
          + 1;
    }

    int maxPlayerCorrectNums = Arrays.stream(playerCorrectNums).max().getAsInt();

    return IntStream.range(0, outcomes.length)
            .filter(i -> playerCorrectNums[i] == maxPlayerCorrectNums)
            .findAny()
            .getAsInt()
        + 1;
  }

  static int simulate(
      double[] q,
      String outcome,
      double s,
      String prevOutcome,
      double prevS,
      String nextOutcome,
      double nextS) {
    return (int)
        IntStream.range(0, q_num)
            .filter(
                i -> s - q[i] >= 1 && outcome.charAt(i) == '0' && prevOutcome.charAt(i) == '1'
              )
            .count();
  }

 
}