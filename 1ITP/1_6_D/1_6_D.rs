use std::io;

fn main() {
    let number = input_number();
    let n = number[0];
    let m = number[1];

    let mut a: Vec<Vec<i64>> = vec![];
    for _ in 0..n {
        a.push(input_number());
    }

    let mut c: Vec<i64> = vec![];
    for _ in 0..m {
        let number = input_number();
        c.push(number[0]);
    }

    for index in 0..n {
       let mut sum = 0i64;
       for index2 in 0..m {
           sum += a[index as usize][index2 as usize] * c[index2 as usize];
       }
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
