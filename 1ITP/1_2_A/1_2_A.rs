use std::io;
use std::cmp::Ordering;

fn main() {
    let (input1, input2) = input_double_number();

    match input1.cmp(&input2) {
        Ordering::Less    => println!("a < b"),
        Ordering::Equal   => println!("a == b"),
        Ordering::Greater => println!("a > b"),
    }
}

#[allow(dead_code)]
fn input_double_number() -> (i32, i32) {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<&str> = input.split_whitespace().collect();

    let input1: i32 = vec[0].parse().unwrap_or(0);
    let input2: i32 = vec[1].parse().unwrap_or(0);

    (input1, input2)
}

#[allow(dead_code)]
fn input() -> i32 {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");
    let input: i32 = input.trim().parse()
        .expect("Failed to parse");

    input
}

