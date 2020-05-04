use std::io;

fn main() {
    let _ = input_number();
    let numbers = input_number();
    let min = numbers.iter().min().unwrap();
    let max = numbers.iter().max().unwrap();
    let sum: i64 = numbers.iter().sum();

    println!("{} {} {}", min, max, sum);
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<i64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}
