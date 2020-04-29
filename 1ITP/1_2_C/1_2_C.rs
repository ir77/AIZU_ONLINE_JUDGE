use std::io;

fn main() {
    let (input1, input2, input3) = input_3_number();
    let mut numbers = [input1, input2, input3];
    numbers.sort();

    println!("{} {} {}", numbers[0], numbers[1], numbers[2]);
}

#[allow(dead_code)]
fn input_3_number() -> (i32, i32, i32) {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<&str> = input.split_whitespace().collect();

    let input1: i32 = vec[0].parse().unwrap_or(0);
    let input2: i32 = vec[1].parse().unwrap_or(0);
    let input3: i32 = vec[2].parse().unwrap_or(0);

    (input1, input2, input3)
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
