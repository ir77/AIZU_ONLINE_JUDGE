use std::io;

fn main() {
    let n = input_number();
    let n = n[0];
    let mut s = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];
    let mut h = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];
    let mut c = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];
    let mut d = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];

    for _ in 0..n {
        let (pattern, number) = input();
        match pattern {
            'S' => s[number - 1] = 0,
            'H' => h[number - 1] = 0,
            'C' => c[number - 1] = 0,
            'D' => d[number - 1] = 0,
            _ => println!("error!"),
        }
    }
    for value in &s {
        if *value != 0 { println!("S {}", value); }
    }
    for value in &h {
        if *value != 0 { println!("H {}", value); }
    }
    for value in &c {
        if *value != 0 { println!("C {}", value); }
    }
    for value in &d {
        if *value != 0 { println!("D {}", value); }
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
