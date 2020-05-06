use std::io;

fn main() {
    loop {
        let input = input_number();
        let m = input[0];
        let f = input[1];
        let r = input[2];
        if (m, f, r) == (-1, -1, -1) {
            break;
        }

        if m == -1 || f == -1 {
            println!("F");
        } else if m + f >= 80 {
            println!("A");
        } else if m + f >= 65 {
            println!("B");
        } else if m + f >= 50 {
            println!("C");
        } else if m + f >= 30 && r >= 50 {
            println!("C");
        } else if m + f >= 30 {
            println!("D");
        } else {
            println!("F");
        }
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
