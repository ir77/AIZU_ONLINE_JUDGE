use std::io;

fn main() {
    loop {
        let input = input_number();
        let n = input[0];
        let x = input[1];
        if (n, x) == (0, 0) { break }
        let mut answer = 0;

        for i in 1..n - 1 {
            for j in i+1..n {
                for k in j+1..n + 1 {
                    if i + j + k == x {
                        answer += 1;
                    }
                }
            }
        }
        println!("{}", answer);
    }
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let vec: Vec<i64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}

#[allow(dead_code)]
fn input() -> (char, usize) {
    let mut s = String::new();
    io::stdin().read_line(&mut s).expect("");
    let mut iter = s.trim().split_whitespace();
    let c: char = iter.next().unwrap().chars().nth(0).unwrap();
    let n: usize = iter.next().unwrap().parse().unwrap();
    (c, n)
}
