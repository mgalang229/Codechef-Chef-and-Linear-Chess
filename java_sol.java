import java.io.*;
import java.util.*;

public class Main {
	static int GCD(int a, int b) {
		if (b == 0) {
			return a;
		}
		return GCD(b, a % b);
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int tt = in.nextInt();
		for (int qq = 1; qq <= tt; qq++) {
			int n = in.nextInt();
			int k = in.nextInt();
			int[] p = new int[n];
			for (int i = 0; i < n; i++) {
				p[i] = in.nextInt();
			}
			int ans = -1;
			for (int i = 0; i < n; i++) {
				if (k % p[i] == 0) {
					ans = Math.max(ans, GCD(k, p[i]));
				}
			}
			System.out.println(ans);
		}
	}
}
