use std::io;

fn main() {
    let number = input_number();
    let n = number[0] as usize;
    let m = number[1] as usize;

    let a: Vec<Vec<i64>> = (0..n).map(|_| input_number()).collect();
    let c: Vec<i64> = (0..m).map(|_| *input_number().first().unwrap()).collect();

    for i in 0..n {
       let sum = (0..m).fold(0, |sum, j| sum + a[i][j] * c[j]);
       println!("{}", sum);
    }
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();
    io::stdin().read_line(&mut input) .expect("Failed to read line");
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
    let c:char = iter.next().unwrap().chars().nth(0).unwrap();
    let n:usize = iter.next().unwrap().parse().unwrap();
    (c, n)
}
