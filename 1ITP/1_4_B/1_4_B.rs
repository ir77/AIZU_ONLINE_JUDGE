use std::io;
use std::f64::consts::PI;

fn main() {
    let numbers = input_number();
    let a = numbers[0];
    
    println!("{} {}", a * a * PI, 2.0 * a * PI);
}

#[allow(dead_code)]
fn input_number() -> Vec<f64> {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0.0))
        .collect();
    vec
}
